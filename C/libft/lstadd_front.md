#lstadd_front.c
```
void  lstadd_front(t_list **lst, t_list *new);
```
- lst : 리스트의 맨 앞에 위치한 요소.
- new : 리스트에 추가할 요소.
- 반환값 없음.
- 요소 'new'를 리스트의 맨 앞에 추가.

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new -> next = *lst;
	*lst = new;
}
```
</details>
