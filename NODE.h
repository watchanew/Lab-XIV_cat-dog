class NODE{
      int data;
      NODE* next;
public:
        NODE(int);
        virtual void show_node();
        void insert(NODE*&);
        NODE* move_next();
        void attack();
        int nodedata();
        virtual ~NODE();
      };
