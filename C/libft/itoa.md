# itoa.c
```
char  *itoa(int n)
```
- n : 변환할 정수
- 반환값 : 정수를 표현하는 문자열. 할당 실패 시 NULL
- malloc을 이용하여 메모리를 할당받은 후, 인자로 받은 정수를 나타내는 문자열을 반환. 음수 또한 무조건 처리되어야 한다.
- 만약 n이 NULL 이면? 
  - 만약 n이 포인터 였다면 char *a = NULL, char *a = 0 둘은 같다. 하지만 int n = NULL, int n = 0은 다르다. int n = NULL은 n의 주소에 0을 넣는다는 것이다(포인터 초기화)
  - 따라서 컴파일이 안된다.

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
static int	n_len(int n)
{
	long long		num; // INT MIN의 경우 양수로 바꾸면 오버플로우가 나서 더 큰 자료형을 쓴다
	size_t	len;

	if (n == 0)
		return (1); // '0' 추가해야 하니까
	len = 0;
	num = n;
	if (num < 0)
	{
		num = -num;
		len++; // 음수의 경우 맨 앞에 '-'를 추가해줘야해서 길이 1 추가
	}
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

static char	*itos(char *str, long long nb, size_t len) //들어온 int를 배열로 저장하는 함수
{
	while (nb > 0)
	{
		str[len--] = '0' + nb % 10; //일의 자리부터 배열의 맨 마지막부터 넣는다. 그리고 앞으로 이동
		nb = nb / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	long long	nb;

	nb = n;
	len = n_len(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)  // 널가드
		return (0);
	str[len--] = '\0'; // 마지막에 널문자 할당!
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
		itos(str, nb, len);
	}
	if (nb > 0)
		itos(str, nb, len);
	return (str);
}
```
</details>
