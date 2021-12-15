# lstsize.c
```
int ft_lstsize(t_list *lst);
```
- 리스트의 노드 갯수를 세어주는 함수

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		cnt;

	if (lst == NULL)
		return (0);
	tmp = lst;
	cnt = 0;
	while ( tmp != NULL)
	{
		cnt++;
		tmp = tmp->next;
	}
	return (cnt);
}
```
</details>
