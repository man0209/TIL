# isprint.c
- 공백을 포함하여 인쇄 가능한 문자면 1 리턴
- 아니면 0 리턴

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
int	isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
```
</details>
