# memmove.c
- src의 첫 주소로부터 len만큼 dst의 첫 주소에 복사한다.
- memcpy.c 와 다른 점은?
	- memcpy 함수와 기능은 같지만 차이는 오버렙을 신경 쓴 부분이다.
	- memcpy는 바로 그냥 어디 거치지 않고 그 위치에 복사해서 붙여넣는다고 생각하면 되고,
	- memmove는 그것보다는 안전하게, 복사할것을 버퍼에 복사하고 해당 위치에 가서 버퍼에 복사된 것을 붙여 넣는 식으로 동작이 구현되어있다.
	- 하지만 여기서는 메모리 할당이 안되므로 다른 방식으로 구현하였다.
		- src 와 dst의 위치를 비교해 dst가 src보다 메모리 주소 상 앞쪽에 위치해있다면, src의 첫번째 값을 dst의 첫번째 값에 넣고 다음 칸으로 넘어가는 식으로 값을 넣어준다.
		- dst가 src의 뒤쪽에 위치할 때는 src의 len의 값을 dst의 len에 넣어주고 앞으로 이동하면서 값을 넣어주는 방법으로 구현했다.

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

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
</details>
