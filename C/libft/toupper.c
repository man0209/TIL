# toupper.c
- 인자가 소문자일 경우 대문자로 바꿔 반환.
- 소문자가 아닌 인자가 들어오면 그대로 반환.

<details markdown="1">
<summary>접기/펼치기</summary>

<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->
    
```
int toupper(int c)
{
    if ((c > 96) && (c < 123))
    {
        return c - 32;
    }
    else
    {
        return c;
    }
}
```

</details>
