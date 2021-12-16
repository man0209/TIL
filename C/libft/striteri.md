# striteri.c
```
void  striteri(char *s, void (*f)(unsigned int, char*))
```
- s : 함수를 적용할 문자열.
- f : 문자열의 각 문자에 적용할 함수.
- 반환값 : 없음.
  - 문자열 's'의 각 문자를 순회하며 함수 'f'를 적용하고, 해당 문자의 인덱스를 함수 'f'의 첫번째 인자로 사용.
  - 또한 각 문자의 주소값이 'f'함수의 두 번째 인자로 사용되며, 경우에 따라 수정될 수 있다.
 
<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
char	*strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*tmp;

	if (s == NULL)
		return (0);
	i = 0;
	len = ft_strlen(s);
	tmp = (char *)malloc(sizeof(char) * len + 1);
	if (tmp == NULL)
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
