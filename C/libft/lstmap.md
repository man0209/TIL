# lstmap.c
```
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```
- f : 리스트 내에서 반복 적용될 함수 포인터
- del : 필요할 경우, 요소의 content를 삭제하는 데에 사용되는 함수
- 리스트 'lst'의 요소들을 순회하며 각 요소의 content에 함수 'f'를 연속적으로 적용시킵니다. 또한 함수 'f'를 적용시킨 결과물들을 content로 담은 새로운 리스트를 생성합니다.
- 'del' 함수들은 필요 시 각 요소의 content를 삭제하는 데 사용됩니다.
- lstmap함수는 연결리스트의 노드요소들을 지정한 함수를 적용하여 새로운 리스트와 노드에 복사하는 함수입니다.

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
t_list	*lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new_next;
	t_list	*tmp;

	if (lst == NULL || f == NULL)
		return (0);
	new_head = ft_lstnew(f(lst->content));
	if (new_head == NULL)
		return (0);
	tmp = new_head;
	lst = lst->next;
	while (lst != NULL)
	{
		new_next = ft_lstnew(f(lst->content));
		if (new_next == NULL)
		{
			ft_lstclear(&new_head, del);
			return (0);
		}
		tmp->next = new_next;
		tmp = new_next;
		lst = lst->next;
	}
	return (new_head);
}
```
</details>
