# putnbr_fd
```
void  ft_putnbr_fd(int n, int fd);
```
- n : 출력할 정수
- fd : 값이 쓰여질 파일 식별자 (file descriptor)
- 제공받은 파일 식별자에 정수 'n'을 출력
<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	size_t		i;
	char		arr[10]; / 인트맥스가 총 10자리 숫자여서.
	long long	nb;	

	i = 0;
	nb = n;
	if (n == 0)
		write (fd, "0", 1);
	if (n < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	while (nb > 0)
	{
		arr[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	while (i)
	{
		i--;
		write(fd, &arr[i], 1);
	}
}
```

</details>
