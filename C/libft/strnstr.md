# strnstr.c
```
char *strnstr(const char *haystack, const char *needle, size_t len);
```
- 정해진 길이안에서 문자열을 찾는 함수.
- needle이 empty string이면 haystack 반환.
- 문자열 없으면 NULL리턴 len == 0 이어도 NULL리턴.
- 문자열 찾으면 문자열 첫 주소 리턴
- haystack에서 needle첫글자를 찾으면 haystack은 다음 인덱스로 이동하고 다시 needle과 비교. 연속된 글자가 다르면 찾는 걸 멈추고(break) 만약 여기서 needle이 끝나면 해당 haystack의 인덱스 주소 반환. 아니면 haystack 다음 인덱스로 이동.

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (needle[j] == haystack[i + j])
		{
			while (needle[j] && haystack[i + j] && ((i + j) < len))
			{
				if (needle[j] != haystack[i + j] || ((i + j) >= len))
					break ;
				j++;
			}
			if (needle[j] == '\0')
				return (&((char *)haystack)[i]);
		}
		i++;
	}
	return (0);
}
```
</details>
