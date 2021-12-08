# calloc.c
```
void  *calloc(size_t count, size_t size)
```
- size크기의 변수를 count개 만큼 저장할 수 있는 메모리 공간을 할당.
- 할당된 메모리 공간을 0으로 초기화
  
- 리턴값 :  메모리가 할당된 포인터를 리턴. 만약 에러가 발생하면  NULL 포인터를 리턴한다.

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
void  *calloc(size_t count, size_t size)
{
  void  *tmp;
  tmp = malloc(count * size);
  memset(tmp, 0, count * size);
  return (tmp);
 }
```

</details>
