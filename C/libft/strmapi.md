# strmapi.c
```
char *strmapi(char const *s, char (*f)(unsigned int, char));
```
- s : 함수를 적용할 문자열
- f : 문자열의 각 문자에 적용할 함수
- 반환값 : 원본 문자열에서 함수 'f'를 성공적으로 적용하여 생성된 결과 문자열. 할당 실패 시 NULL
  - 문자열 's'의 각 문자를 순회하며 함수 'f'를 적용.
  - 해당 문자의 인덱스를 함수 'f'의 첫 번째 인자로 사용.
  - 각 문자에 함수가 적용된 새로운 문자열을 생성. (malloc을 이용하여 메모리를 할당)

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*tmp;

	if (s == NULL || f == NULL) // s가 NULL이면 함수를 적용할 문자가 없으니 함수 종료.
		return (0);
	i = 0;
	len = ft_strlen(s);
	tmp = (char *)malloc(sizeof(char) * len + 1);
	if (tmp == NULL) / 널가드
		return (0);
	while (i < len)
	{
		tmp[i] = (*f)(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
```
</details>
