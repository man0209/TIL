# strtrim.c
```
char  *strtrim(char const *s1, char const *set);
```
- s1 : 양 쪽을 잘라낼 원본 문자열
- set : 제거해야 될 문자들
- 반환값 : 문자가 제거된 문자열. 할당 실패 시 NULL
- malloc을 이용하여 메모리를 할당받은 후, 's1'의 양 쪽 끝에서 'set'에 지정된 문자들이 제거된 문자열 사본을 반환
- 문자열 리터럴은 read-only 메모리에 저장되어 런타임 중에 특별히 할당되거나 해제되지 않는 것으로 알고 있다.
strdup(“”)처럼 빈 문자열을 굳이 힙에 할당하여 리턴하는 이유는 외부에서 사용 시 strtrim()이 리턴한 문자열이 할당되어있다는걸 보장하기 위해서라고 생각합니다. 문자열 리터럴을 리턴했는데 밖에서 free()할 경우 pointer being freed was not allocated가 발생할 수 있으니 통일하여 사용하기 위함이라고 이해했습니다

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
char	*strtrim(char const *s1, char const *set)
{
	char	*cp;
	size_t	start;
	size_t	end;

	start = 0;
	if (s1 == NULL)
		return (0);
	if (set == NULL)
		return (0);
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (end && ft_strchr(set, s1[end - 1])) // end-1부터 비교 시작해서 비교를 한번 덜하기 때문에 동적할당할 때 +1로 해준다.
		end--;
	if (start >= end)
		return (ft_strdup(""));
	cp = (char *)malloc(sizeof(char) * (end - start + 1));
	if (cp == NULL)
		return (0);
	ft_strlcpy(cp, s1 + start, end - start + 1);
	return (cp);
}
```
</details>
