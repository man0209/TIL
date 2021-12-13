# putendl_fd.c
```
void  putendl_fd(char *s, int fd);
```
- s : 출력할 문자열.
- fd : 값이 쓰여질 파일 식별자 (file descriptor)
- 반환값 : 없음.
- 제공받은 파일 식별자에 문자열 's'를 출력하고, 개행을 출력합니다.


<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
  if (s == NULL)
    return ; // void인 함수에서 함수를 종료할 때 사용하는 
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
```
</details>
