# strchr.c

- *s 문자열에서 c를 앞에서부터(인덱스 0부터) 찾아 그 주소값을 리턴하는 함수.
- 문자열에 c가 없으면 NULL(0)을 리턴.
- 만약 c가 NULL이면 문자열을 다 돌고 문자열 마지막 NULL이 있는 주소값 리턴.
<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
char *strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char )c)
			return ((char *) s);
		s++;
	}
	if (c == '\0')
		return ((char *) s);
	return (0);
}
```
</details>
