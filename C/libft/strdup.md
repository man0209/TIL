# strdup.c
```
char  *strdup(const char *s1);
```
- 문자열 s1을 복사할 충분한 메모리를 할당해주는 함수.
- 리턴값 : 할당한 메모리 포인터, 만약 메모리가 부족하면 NULL 리턴.

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
char	*strdup(const char *s1)
{
	char	*tmp;
	int		cnt;
	int		i;

	i = 0;
	cnt = ft_strlen(s1);
	tmp = (char *)malloc(sizeof(char) * cnt + 1);
	if (tmp == NULL)
		return (0);
	while (s1[i] != '\0')
	{
		tmp[i] = s1[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
```
</details>
