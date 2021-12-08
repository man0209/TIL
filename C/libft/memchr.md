# memchr.c
- 찾을 값으로 int로 값이 전달되지만 함수 내부적으로는 한 바이트(8비트)씩 비교하기 때문에 이 값은 unsigned char로 변환되어 사용된다.
- const void *s = 검색을 수행할 시작 주소, int c = 찾을 값, n = *s부터 검색을 수행할 만큼의 바이트 수
- 리턴값 : 메모리 블록에서 c와 일치하는 값이 있다면 그 곳의 주소, 찾지 못하면 NULL 리턴
- *s가 NULL일 때 Segmentation fault 오류 발생.

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
#include <stdio.h>
  2 #include <string.h>
  3 
  4 int main(void)
  5 {
  6     char *s = NULL;
  7     char *t = (char*)memchr(s, 0, strlen(s));
  8     printf ("%p ", t);
  9 }
 ```
</details>

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp_s;
	size_t			i;

	tmp_s = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (*tmp_s == (unsigned char) c)
			return (tmp_s);
		tmp_s++;
		i++;
	}
	return (0);
}
```
</details>
