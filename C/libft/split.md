# split.c
```
char **ft_split(char const *s, char c);
```
- s  : 쪼갤 문자열
- c  : 구분자 (delimiter)
- 반환값 : split을 통해 분할된 문자열의 배열, 할당 실패 시 NULL
- malloc을 이용하여 메모리를 할당받은 후, 구분자 'c'를 기준으로 문자열 's'를 분할하여 그 결과를 담은 새로운 문자열 배열을 반환.
- 문자열 배열의 끝은 NULL 포인터로 끝나야 한다.


<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
//s문자열에서 delimiter(구분자) 에 의해 분할된 문자열 수 구하는 함수

static	size_t	count_word(char const *s, char c)
{
	size_t	cnt;
	size_t	flag;
	size_t	i;

	cnt = 0;
	flag = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && flag == 0)
		{
			cnt ++;
			flag = 1;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (cnt);
}

// 구분자에 의해 나눠진 문자열 메모리 할당하는 함수
static char	*split_and_allocate(char const *s, size_t len)
{
	char	*word;
	size_t	i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (0);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static size_t	free_all(char **words, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(words[i]);
		i++;
	}
	return (0);
}

// 구분자에 의해 쪼개진 문자열의 길이를 구하고 해당 길이만큼 이차원 배열의 각각 인덱스에 1차원 배열로 넣는 함수
static void	words_small(char const *s, char c, char **words_big)
{
	size_t	start;
	size_t	i;
	size_t	small_i;

	i = 0;
	small_i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break; // 구분자로만 이루어진 문자열이어서 
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++; // start부터 구분자 까지의 길이, 즉 구분자로 나눠진 문자열의 길이?
		words_big[small_i] = split_and_allocate(s + start, i - start); // 구분자로 나눠진 문자열의 첫 주소를 찾기위해
		if (words_big[small_i] == NULL) // i - start : 구분자로 나눠진 문자열 길이 구하는 식
		{
			free_all(words_big, small_i);
			return ;
		}
		small_i++;
	}
	words_big[small_i] = NULL; // 마지막에 NULL포인터 추가
}

char	**ft_split(char const *s, char c)
{
	char			**words_big;
	size_t			small_cnt;

	if (s == NULL)
		return (0);
	small_cnt = count_word(s, c);
	words_big = (char c**)malloc(sizeof(char *) * (small_cnt + 1));
	if (words_big == NULL)
		return (0);
	words_small(s, c, words_big);
	return (words_big);
}
	/*
	 * s : 쪼갤 문자열.
	 * c : 구분자 (delimiter)
	 * 반환값 : split을 통해 분할된 문자열의 배열, 할당 실패 시 NULL
	 * malloc을 이용하여 메모리를 할당받은 후, 구분자 'c'를 기준으로 문자열 's'를 분할하여 그 결과를 담은 새로운 문자열 배열을 반환.
	 * 문자열 배열의 끝은 NULL포인터로 끝나야 한다.
	 * 1. 구분자로 나눠진 배열의 갯수 세는 함수 만들기 (완)
	 * 2. 말록으로 더블포인터 메모리 할당 그리고 널가드 (완)
	 * 3. 구분자로 나눠지는 각각의 문자열 길이 구하는 함수 만들기
	 * 4. 함수로 구한 길이만큼 2차 포인터에서 1차 포인터로 메모리 할당.
	 * 5. 4번에서 할당 한 메모리에 문자열 복사하기.
	 * 6. free로 메모리 해제. // 여기서 free로 메모리 해제 할 시 데이터 날라가는지 알아보기 / 날라가면 왜 날라가는지 알기/ 날아가면 말록으로 한 거 소용없는 거 아닌가?
	 */ 
 ```
</details>
