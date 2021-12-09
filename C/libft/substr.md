# substr.c
```
char  *substr(char const *s, unsigned int start, size_t len);
```
- s : 부분 문자열(substring)을 생성할 원본 문자열.
- start : 부분 문자열의 맨 처음 인덱스.
- len : 부분 문자열의 최대 길이.
- 리턴값 : 부분 문자열, 할당 실패 시 NULL
- malloc을 이용하여 메모리를 할당받은 후, 원본 문자열 's'로부터 부분 문자열을 생성하여 반환.
- 부분 문자열은 인덱스 'start'부터 시작하며, 최대 길이 'len'을 갖는다.
- s가 널이면 널 리턴.
- start >= strlen(s) 면 strdup("") 빈문자열 즉 널 한개만 있는 메모리 반환.
- 
<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
char	*substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (substr == NULL)
		return (0);
	while (len)
	{
		substr[i] = s[start + i];
		i++;
		len--;
	}
	substr[i] = '\0';
	return (substr);
}
```
</details>
