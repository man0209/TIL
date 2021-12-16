# strlen.c
- 문자열의 길이를 반환.
- 맨 끝 널은 제외.
- str에 NULL 넣으면 segmentation fault 뜬다. 

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
int strlen(char *str)
{
    int cnt;

    cnt = 0;
    while (str[cnt] != '\0')
    {
        cnt++;
    }
    return cnt;
}
```
</details>
