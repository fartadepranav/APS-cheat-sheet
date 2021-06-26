    #include <bits/stdc++.h>
    using namespace std;


    struct Node
    {
        int data;
        struct Node *next;
    }*first=NULL,*second=NULL,*third=NULL;

    void Display(struct Node *p)
    {
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
    }

    void Create(int A[],int n)
    {
        int i;
        struct Node *t,*last;
        first=(struct Node *)malloc(sizeof(struct Node));
        first->data=A[0];
        first->next=NULL;
        last=first;
        for(i=1;i<n;i++)
        {
            t=(struct Node*)malloc(sizeof(struct Node));
            t->data=A[i];
            t->next=NULL;
            last->next=t;
            last=t;
        }
    }

    void RemoveDuplicate(struct Node *p)
    {
        int hash[10000] = {0};
        struct Node *temp = p;
        struct Node *ptr;
        struct Node *tail;

        while(temp!=NULL){
            hash[temp->data]++;
            if(hash[temp->data]>1){
                ptr->next = temp->next;
                tail = temp;
                temp=temp->next;
                free(tail);
                continue;
            }
            ptr = temp;
            temp=temp->next;
        }
    }

    int main()
    {
        int n;
        cout<<"Enter the no. of elements\n";
        cin>>n;
        int A[n];
        cout<<"Enter the elements\n";
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        Create(A,n);
        RemoveDuplicate(first);
        cout<<"The final list is\n";
        Display(first);
        return 0;
    }
