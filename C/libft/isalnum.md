# isalnum.c
- 인수가 '0' ~ '9' 이거나 알파벳이면 1 리턴
- 아니면 0 리턴

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
int	isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0); 
}
```
</details>
