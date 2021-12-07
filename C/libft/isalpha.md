# isalpha.c
- 인수가 알파벳일 경우 nonzero 리턴.
- 알파벳이 아니면 0 리턴.


<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
int isalpha(int c)
{
    if ((c >= 'a') && (c <='z') || (c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
```
</details>
