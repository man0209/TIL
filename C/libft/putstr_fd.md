# putstr_fd.c
```
void  putstr_fd(char *s, int fd);
```
- s : 출력할 문자열.
- fd : 값이 쓰여질 파일 식별자 (file descriptor)
- 반환값 : 없음
- 제공받은 파일 식별자에 문자열 's'를 출력합니다.

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
```
</details>
