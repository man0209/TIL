# strlcat.c
- dst 뒤에 src를 붙여서 원하는 길이(dstsize)를 만드는 함수.
- strncat 와 다른 점은??
	- strncat 은 세번 째 인자(dstsize)가 src에서 복사하고 싶은 길이('\0'제외).
	- strncat 함수는 원하는 길이(dstsize)만큼의 소스(src)를 문자열(dst)에 붙이는 함수.
	- strlcat 함수는 dstsize 가 dst_len(길이)보다 작을 경우와 아닐 경우 반환값(return)이 다르다.
		- dstsize <= dst_len
			- src_len + dstsize 리턴
		- 그 외 
			- dst_len + src_len 리턴

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->


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
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
```
</details>
