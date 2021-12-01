# toupper.c
- 인자가 소문자일 경우 대문자로 바꿔 반환.
- 소문자가 아닌 인자가 들어오면 그대로 반환.
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
---

# tolower.c
- 인자가 대문자일 경우 소문자로 바꿔 반환.
- 소문자가 아닌 인자가 들어오면 그대로 반환.
```
int tolower(int c)
{
    if ((c > 64) && (c < 91))
    {
        return c + 32;
    }
    else
    {
        return c;
    }
}
```
---
# strlen.c
- 문자열의 길이를 반환.
- 맨 끝 널은 제외.
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
---
# isalpha.c
- 인수가 알파벳일 경우 nonzero 리턴.
- 알파벳이 아니면 0 리턴.
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
---
# isdigit.c
- 인수가 '0' ~ '9' 면 1 리턴
- 아니면 0 리턴
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
---
# isalnum.c
- 인수가 '0' ~ '9' 이거나 알파벳이면 1 리턴
- 아니면 0 리턴
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
---
# isascii.c
- 인수가 ascii코드면 1 리턴
- 아니면 0 리턴
```
int	isascii(int c)
{
	if (c >= 0 && c <= 255)
		return (1);
	return (0);
}
```
---
# isprint.c
- 공백을 포함하여 인쇄 가능한 문자면 1 리턴
- 아니면 0 리턴
```
int	isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
```