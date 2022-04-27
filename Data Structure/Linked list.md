# 연결 리스트 구현 시 이중 포인터를 사용하는 이유
- 단일 연결리스트에서 삽입과 삭제를 통해 head 포인터의 값을 변화시킬 수 있다.
- t_list **lst 는 t_list * lst의 주소를 가리키는 포인터
  - t_list **lst 변수가 가지고 있는 값은 t_list * lst 의 주소
  - t_list **lst 가 가지고 있는 t_list * 의 주소는 어떤 리스트(lst)의 첫번째 주소 즉 * lst = head의 주소

# * lst == NULL 과 lst == NULL의 차이
- * lst 는 lst 의 첫번째 주소, 즉 헤드의 주소를 의미. 따라서 * lst == NULL 은 헤드가 없다. 즉 빈 리스트라는 뜻
- lst == NULL 은 리스트 자체가 없다는 뜻.

# Doubly linked list(이중 연결 리스트)
- ![image](https://user-images.githubusercontent.com/69157076/165557388-398e4b10-914d-4454-8200-183a5170d03e.png)
- Doubly linked list의 핵심은 노드와 노드가 서로 연결되어 있다는 점. 단순 연결리스트(linked list)와는 다르게 노드가 이전 노드(prev) 와 다음 노드(next)로 구성되어 있다.
- 가장 큰 장점은 양방향으로 연결되어 있기 때문에 노드를 탐색하는 방향이 양쪽으로 가능하다는 것.
- 단점은 이전 노드를 지정하기 위한 변수를 하나 더 사용해야 하는 것. 즉 메모리를 더 많이 사용한다는 의미. 그리고 구현이 조금 더 복잡해진다는 점.
- 하지만 장점이 더 크기 때문에 linked list  보다는 Doubly linked list를 더 많이 사용.

```
// head 와 tail이 있는 stack에 노드 추가 하는 함수. top == tail
void	push(t_stack *stack, int num) 
{
	t_node	*new_node;

	new_node = (t_node*)malloc(sizeof(t_node *));
	if (new_node == NULL)
		return ;
	new_node->data = num;
	new_node->prev = stack->top->prev; // 새 노드의 prev를 top의 prev로 연결
	new_node->next = stack->top;
	stack->top->prev->next = new_node;// top의 prev의 노드의 next 노드로 new_node 연결
	stack->top->prev = new_node;
	stack->top = new_node;
	stack->length++;
}

int main()
{
	t_stack *a;

	a = (t_stack *)malloc(sizeof(t_stack));
	init_stack(a);

	push(a, 3);

	push(a, 4);

	push(a, 5);

	t_node *cur = a->head;

	while (cur)
	{
		printf("%d\n", cur->data);
		printf("cur->prev : %p\n", cur->prev);
		printf("cur : %p\n", cur);
		printf("cur->next : %p\n", cur->next);

		cur = cur->next;
	}
}
```
![image](https://user-images.githubusercontent.com/69157076/165558889-cdd09ae8-9633-4052-88e0-17624dcfc9f3.png)



# 배열(array) 와 연결 리스트(linked list)의 장.단점
- 배열
  - 저장할 데이터의 갯수가 정해져 있고 삽입, 삭제 작업이 적고 특정 위치의 데이터를 조회하는 작업이 많다면 `배열`
- 연결 리스트
  - 저장할 데이터의 갯수가 미정이고 삽입, 삭제 작업이 많고 특정 위치 데이터를 조회하는 경우가 별로 없다면 `연결 리스트`
