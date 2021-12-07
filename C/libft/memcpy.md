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
- memcpy(a, b, 10) 일 경우 a가 10 보다 크기가 작을 경우 오버플로우 발생함. dst buffer 보다 size argument 가 크기 때문.
- dst가 null이고 dstsize가 1일 경우src에서 1개만 들어간다?

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

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
</details>
