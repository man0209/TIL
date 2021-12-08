# memcmp.c
```
int memcmp (const void *s1, const void *s2, size_t n);
```
- s1 과 s2 를 1바이트씩 n바이트 길이까지 비교한다.
- s1 과 s2 가 같으면 0을 리턴.
- s1 이 크면 0보다 큰 값 리턴.
- s1 이 작으면 0보다 작은 값 리턴.
- 메모리 관련 함수이기 때문에 unsigned char로 접근.
- n이 0 이면 0이 리턴 된다.

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
#include <stdio.h>
#include <string.h>

int	main() {
	char str1[256];
	char str2[256];
	int	n;
	size_t len1, len2;

	printf ("Enter a sentence : ");
	scanf("%s", str1);
	
	printf("Enter another sentence : ");
	scanf("%s", str2);

	len1 = strlen(str1);
	len2 = strlen(str2);

	n = memcmp(str1, str2,0);

	if (n > 0) {
		printf("'%s' is greater than '%s' . \n", str1, str2);
	} else if (n < 0) {
		printf("'%s' is less than '%s' .\n", str1, str2);
	} else {
		printf("'%s' is the same as '%s' .\n", str1, str2);
	}
	return 0;
}
```
</details>

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	while (n)
	{
		if (*tmp_s1 != *tmp_s2)
			return (*tmp_s1 - *tmp_s2);
		tmp_s1++;
		tmp_s2++;
		n--;
	}
	return (0);
}
```
</details>
