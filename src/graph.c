// Graph data type
struct Graph;

struct List {
    struct Graph* front;
    struct Graph* back;
    struct Graph** list;
};



struct Graph {
    struct List directed_edge;
};
