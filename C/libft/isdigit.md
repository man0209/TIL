# isdigit.c
- 인수가 '0' ~ '9' 면 1 리턴
- 아니면 0 리턴

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
int	isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
```
</details>
