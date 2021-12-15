# istadd_back.c
```
void  lstadd_back(t_list **lst, t_list *new);
```
- lst : 리스트의 맨 앞에 위치한 요소의 포인터
- new : 리스트의 맨 끝에 추가할 요소
- 요소 'new'를 리스트의 맨 뒤에 추가합니다.
- *lst == NULL 과 lst == NULL 의 차이
	- *lst는 lst의 첫번째 주소, 즉 헤드의 주소를 의미한다. 헤드가 비었다는 건, *lst는 빈 리스트 라는 뜻!
	- lst == NULL은 리스트 자체가 존재하지 않는다 뜻!


<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
{
	t_list *last;

	if (lst == NULL || new == NULL)  // 예외처리
		return ;
	if (*lst != NULL) // *lst 가 NULL이면 첫주소 즉 헤드가 없다는 것. 따라서 이 리스트는 비어 있다는 말
	{
		last = ft_lstlast(*lst); // ft_lstlast함수로 *lst 리스트의 마지막 노드를 last에 할당.
		last->next = new; // next가 new를 가리키게
	}
	else
		*lst = new; // *lst == NULL일 경우 리스트의 첫번째 즉 헤드가 new가 된다.
	new->next = NULL;
}
```
</details>
