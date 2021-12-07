# strrchr.c
- strrchr 함수는 c를 뒤에서부터 찾는 함수.
- 뒤에서부터 찾기 때문에 char *s의 첫번째 주소를 따로 저장해 놓는다.

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
char *ft_strrchr(const char *s, int c)
{
	char *startPoint;

	startPoint = (char *) s;
	while (*s) 
		s++;
	while (s > startPoint)
	{
		s--;
		if (*s == (char ) c)
			return ((char *) s);

	}
	return (0);
}
```
</details>
