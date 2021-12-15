#lstadd_front.c
```
void  lstadd_front(t_list **lst, t_list *new);
```
- lst : 리스트의 맨 앞에 위치한 요소.
- new : 리스트에 추가할 요소.
- 반환값 없음.
- 요소 'new'를 리스트의 맨 앞에 추가.
- 연결 리스트 구현시 이중 포인터를 사용하는 이유
  단일 연결리스트에서 삽입과 삭제를 통해 head 포인터의 값을 변화시킬 수 있다.
  이때, 호출 함수의 포인터변수가 참조하는 객체를 피호출 함수에서 바꾸고자 할 경우 이중 포인터를 사용하면 된다.
- t_list **lst 는 t_list 포인터(lst)의 주소를 가리키는 포인터다.
  t_list **lst 변수가 담고있는 값은 t_list *의 주소
  t_list ** lst가 담고 있는 t_list * 의 주소는 어떤 리스트의 첫번째 주소
  즉, *lst는 head의 주소

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
void	ft_lstadd_front(t_list **lst, t_list *new)  
{
	if (lst == NULL || new == NULL)
		return ;
	new -> next = *lst; // 원래 첫번째 노드를 가리킨다. 
	*lst = new; // *lst는 리스트의 첫번째 노드를 가리키는 포인터. 따라서 *lst = new new가 첫번째 노드.
}
```
</details>
