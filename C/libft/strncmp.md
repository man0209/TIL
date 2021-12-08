# strncmp.c 
```
int strncmp(const char *s1, const char *s2, size_t n);
```
- 문자열 s1 s2를 n개만큼 비교하는 함수.
- 리턴값 : s1 = s2 일 경우 0리턴
- 그 외는 s1 - s2 리턴. s1 s2값이 같으면 어차피 s1 - s2도 0이기 때문에 모든 리턴값 s1 - s2로 해줘도 된다고 생각함.


<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_tmp;
	unsigned char	*s2_tmp;
	size_t			cnt;

	s1_tmp = (unsigned char *) s1;
	s2_tmp = (unsigned char *) s2;
	cnt = 0;
	if (n == 0)
		return (0);
	while (cnt < n)
	{
		if (s1_tmp[cnt] == '\0' || s2_tmp[cnt] == '\0')
			break ;
		if (s1_tmp[cnt] != s2_tmp[cnt])
			break ;
		if (cnt + 1 == n)
			break ;
		cnt++;
	}
	return ((int)(s1_tmp[cnt] - s2_tmp[cnt]));
}
```
</details>
