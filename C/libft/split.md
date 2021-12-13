# split.c
```
char **ft_split(char const *s, char c);
```
- s  : 쪼갤 문자열
- c  : 구분자 (delimiter)
- 반환값 : split을 통해 분할된 문자열의 배열, 할당 실패 시 NULL
- malloc을 이용하여 메모리를 할당받은 후, 구분자 'c'를 기준으로 문자열 's'를 분할하여 그 결과를 담은 새로운 문자열 배열을 반환.
- 문자열 배열의 끝은 NULL 포인터로 끝나야 한다.


<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
</details>
