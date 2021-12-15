# lstdelone.c
```
void  lstdelone(t_list *lst, void (*del)(void *));
```
- lst : 삭제할 요소
- (*del) : 요소의 content 삭제에 사용되는 함수 포인터
- 첫 번째 인자값으로 받은 요소의 content를 두 번째 인자로 받은 함수 포인터를 이용해 해제하고, 요소 자체의 메모리를 해제합니다. next 포인터는 해제하면 안 됩니다.
- The memory of ’next’ must not be freed. -> 무슨 뜻일까? / free(lst) 하지말고 노드 안 부터 free하라는 건가?
- free(lst) 하면 안되는 이유는?
  - content 변수는 주소만 담고 있어서 그 주소가 가리키는 값까지 삭제를 해줘야 하는데, 
  - free(lst)를 한 후에는 lst->content 로 접근이 불가능하다. 
  - 그래서 content를 먼저 free해주고 그 다음에 lst를 free 해줘야 한다.


<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
void	lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL) // 예외처리 lst 가 NULL 이면? 리스트 자체가 없는것.
		return ;
	del(lst->content); // del함수로 lst content free
	free(lst); // content  free 해주고 lst free
}
```
</details>
