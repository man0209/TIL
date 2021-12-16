# strjoin.c
```
char  *strjoin(char const *s1, char const *s2);
```
- 반환값 : 새로운 문자열. 할당 실패 시 NULL;
- malloc 을 이용하여 메모리를 할당받은 후, 문자열 s1 과 s2를 이어붙인 새로운 문자열을 생성하여 반환한다.

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
char	*strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (0);
	join = (char *)malloc(sizeof(char) * len + 1);
	if (join == NULL)
		return (0);
	while (i < len)
	{
		if (i < ft_strlen(s1))
			join[i] = s1[i];
		else
			join[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	join[i] = '\0';
	return (join);
}
```
</details>
