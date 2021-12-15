# istadd_back
```
void  lstadd_back(t_list **lst, t_list *new);
```
- lst : 리스트의 맨 앞에 위치한 요소의 포인터
- new : 리스트의 맨 끝에 추가할 요소
- 요소 'new'를 리스트의 맨 뒤에 추가합니다.


<details markdown="1">
<summary>접기/펼치기</summary>
<!--summary 아래 빈칸 공백 두고 내용을 적는공간-->

```
{
	t_list *last;

	if (lst == NULL || new == NULL)  // 예외처리
		return ;
	if (*lst != NULL) /
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
		*lst = new;
}
```
</details>
