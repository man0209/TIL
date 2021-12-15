# lstlast.c
```
t_list  *ft_lstlast(t_list *lst);
```
- 리스트의 맨 마지막에 위치한 요소를 반환합니다.

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (lst == NULL)
		return (0);
	tmp = lst;
	while (tmp->next != NULL) // tmp->next != NULL은 마지막 노드에서 멈춘다. tmp != NULL은 node가 없는 NULL을 가리키니 마지막 노드를 지난다.
		tmp = tmp->next;
	return (tmp);
}
```
</details>
