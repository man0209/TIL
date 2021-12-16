# lstiter.c
```
void  ft_lstiter(t_list *lst, void (*f)(void *));
```
- f : 리스트 내에서 반복 적용될 함수
- 리스트 'lst' 를 순회하며, 리스트에 포함된 모든 요소들의 content에 함수 'f'를 반복적으로 적용시킵니다.

<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
void	lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)  // 예외처리
		return ;
	while (lst != NULL) // 리스트의 끝까지
	{
		f(lst->content);
		lst = lst->next;
	}
}
```
</details>
