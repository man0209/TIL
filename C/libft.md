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
---
# memset.c
- 어떤 메모리의 시작점부터 연속된 범위를 어떤 값으로(바이트 단위)모두 지정하고 싶을 때 사용하는 함수.
- *b = 채우고자 하는 메모리의 시작 포인터(시작 주소)
-  c = 메모리에 채우고자 하는 값, int형이지만 내부에서는 unsigned char(1 byte)로 변환되어서 저장된다.
-  len = 채우고자 하는 바이트의 수. 즉, 채우고자 하는 메모리의 크기
- 메모리 블록을 채우는 기준은 1byte(8bit)이기 때문에, 0이 아닌 다른 값으로 메모리를 초기화하고자 할 때 문제가 발생할 수 있다.
- 

```
void *memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *temp;

	temp = (unsigned char *)b;
	i = 0;
	while(i < len)
		temp[i++] = (unsigned char)c;
	return (temp);
}
```
- size_t 자료형이란?
	- 부호 없는 정수 자료형.
	- 32비트에서는 4바이트, 64비트에서 8바이트로 정의되어 있다.
	- C언어 표준 함수에서도 크기를 의미하는 매개변수나 반환값은 size_t를 사용하고 있고, CPU비트 수에 맞게 자료형을 제공하고 있으므로, 크기를 의미하는 변수는 unsigned int대신 size_t로 선언하는 것이 좋다.
	- 이론적으로 가능한 오브젝트의 최대 크기를 저장할 수 있는 타입이며 일반적으로, 배열 인덱싱 및 루프 계산에 사용됩니다.
	- (문자열이나 메모리의 사이즈를 나타낼 때 사용)

- *b 를 왜 char가 아닌 unsigned char로 casting하는가?
	- 메모리 주소에 부호있는 정수타입을 쓰면 안된다. 올바르게 동작하지 않고 프로그램이 중단 될 수도 있다. unsigned char을 쓰는 게 관례	  - 특정 아키텍처 cpu(ARM)에서는 char 타입 dafault 가 unsigned char

- *b 와 c 를 왜 unsigned char로 캐스팅 하는가?
	- memset함수는 바이트(8비트)단위로 메모리에 접근하기 때문에 i++를 통해 1바이트 단위로 인덱스를 이동하려면 unsigned char로 캐스팅해야 한다.

---
# memcpy.c
---
- src의 첫 주소로부터 n만큼 dst의 첫 주소에 복사한다.
- 왜 const void *를 src에 썼을까?
	- const void *(pointer to constant) 의 경우 포인터의 값은 바꿀 수없고, 포인터의 주소는 바꿀 수있다. 
	- void * const(constant pointer) 의 경우 포인터의 값은 바꿀 수 있고, 포인터의 주소는 바꿀 수 없다.
	- 따라서 여기서 const void *를 쓴 이유는 복사할 값, 즉 src의 값이 변경되지 않도록 하기 위함인 것 같다.
	- 만약 매개변수를 const로 받으면, 해당 함수 내에서 매개변수를 할당하는 변수를 선언할 때 같은 const로 하는게 좋다.
- memcpy함수는 src의 널 종료문자(null terminating character)을 검사하지 않는다. 언제나 정확히 num바이트 만큼을 복사한다.
- 만약 dst 와 src의 메모리가 겹치게 되면 오버랩 현상이 일어나기 때문에 memmove 함수를 이용하는 것이 좋다.
- 자료형이 size_t인 size의 값이 음수가 되면 버퍼오버플로우(size_t는 unsigned형으로 선언되어 있기 때문)가 일어난다. 컴파일러에 따라서 경고메시지를 출력해주기도 한다. 대부분 컴파일러에서 abort오류가 일어난다.

```
void *memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *new_dst;
	unsigned char *new_src;
	size_t				 i;
	
	if (dst == NULL && src == NULL)
		return (0);
	new_dst = (unsigned char*)dst;
	new_src = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		new_dst[i] = new_src[i];
		i++;
	}
	return (dst);
}
```
---
# memmove.c
- src의 첫 주소로부터 n만큼 dst의 첫 주소에 복사한다.
- memcpy.c 와 다른 점은?
	- memcpy 함수와 기능은 같지만 차이는 오버렙을 신경 쓴 부분이다.
	- memcpy는 바로 그냥 어디 거치지 않고 그 위치에 복사해서 붙여넣는다고 생각하면 되고,
	- memmove는 그것보다는 안전하게, 복사할것을 버퍼에 복사하고 해당 위치에 가서 버퍼에 복사된 것을 붙여 넣는 식으로 동작이 구현되어있다.
	- 하지만 여기서는 메모리 할당이 안되므로 다른 방식으로 구현하였다.
		- src 와 dst의 위치를 비교해 dst가 src보다 메모리 주소 상 앞쪽에 위치해있다면, src의 첫번째 값을 dst의 첫번째 값에 넣고 다음 칸으로 넘어가는 식으로 값을 넣어준다.
		- dst가 src의 뒤쪽에 위치할 때는 src의 len의 값을 dst의 len에 넣어주고 앞으로 이동하면서 값을 넣어주는 방법으로 구현했다.
```
void *memmove(void *dst, const void *src, size_t len)
{
	unsigned char *new_dst;
	unsigned char *new_src;

	if (dst == NULL && src == NULL)
		return (0);
	new_dst == (unsigned char *)dst;
	new_src == (unsigned char *)src;
	if (new_dst > new_src)
	{
		while (len)
		{
			len--;
			new_dst[len] = new_src[len];
		}
	}
	else
	{
		while (len)
		{
			*new_dst++ = *new_src++;
			len--;
		}
	}
	return (dst);
}
```
---
# strlcpy.c
- dst에 src의 dstsize만큼 복사하는 함수.
- strncpy 와 다른 점은?
	- strncpy 는 src의 길이가 dstsize보다 작을 경우 남은 공간을 NULL로 다 채운다.
	- strncpy 는 src의 길이가 dstsize보다 클 경우 마지막에 NULL을 넣지 않아 보안상? 위험해질 수 있다.
	- strlcpy 는 src의 길이가 dstsize보다 작을 경우 src의 끝에 NULL하나만 넣는다.
	- strlcpy 는 src의 길이가 dstsize보다 클 경우 dstsize만큼 복사하고 마지막에 NULL을 추가해준다.
- 자료형이 size_t인 dstsize의 값이 음수가 되면 버퍼오버플로우 (size_t는 unsigned형으로 선언되어 있기 때문)가 일어난다.
- 컴파일러에 따라서 경고메시지를 출력해주기도 한다. 대부분 컴파일러에서 abort오류가 일어난다.

```
size_t strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t src_len;
	size_t i;

	src_len = strlen(src);
	i = 0;

	while (i < src_len && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (src_len);
}
```
---
# strlcat.c
- dst 뒤에 src를 붙여서 원하는 길이(dstsize)를 만드는 함수.
- strncat 와 다른 점은??
	- strncat 은 세번 째 인자(dstsize)가 src에서 복사하고 싶은 길이('\0'제외).
	- strncat 함수는 원하는 길이(dstsize)만큼의 소스(src)를 문자열(dst)에 붙이는 함수.
	- strlcat 함수는 dstsize 가 dst_len(길이)보다 작을 경우와 아닐 경우 반환값(return)이 다르다.
		- dstsize < dst_len
			- src_len + dstsize 리턴
		- 그 외 
			- dst_len + src_len 리턴

```
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len;
	size_t src_len;
	size_t i;

	i = 0;
	dst_len = strlen(dst);
	src_len = strlen(src);
	
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[i] && dst_len + i + 1 < dstsize)
	{
		dst[dst_len + 1] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
```
---
# 
	



