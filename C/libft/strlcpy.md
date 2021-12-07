# strlcpy.c
- dst에 src의 dstsize만큼 복사하는 함수.
- strncpy 와 다른 점은?
	- strncpy 는 src의 길이가 dstsize보다 작을 경우 남은 공간을 NULL로 다 채운다.
	- strncpy 는 src의 길이가 dstsize보다 클 경우 마지막에 NULL을 넣지 않아 보안상? 위험해질 수 있다.
	- strlcpy 는 src의 길이가 dstsize보다 작을 경우 src의 끝에 NULL하나만 넣는다.
	- strlcpy 는 src의 길이가 dstsize보다 클 경우 dstsize만큼 복사하고 마지막에 NULL을 추가해준다.
- 자료형이 size_t인 dstsize의 값이 음수가 되면 버퍼오버플로우 (size_t는 unsigned형으로 선언되어 있기 때문)가 일어난다.
- 컴파일러에 따라서 경고메시지를 출력해주기도 한다. 대부분 컴파일러에서 abort오류가 일어난다.

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->


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
</details>
