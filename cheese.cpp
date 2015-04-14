void Graph::Dijkstra(string starting, string destination)
{
    int x;
    //find starting one
    for(int i = 0; i< vertices.size() ;i++)
    {
        if(vertices.at(i).name == starting)
        {
            x = i;
        }
        
    }
    
    int y;
    //find destination one
    for(int i = 0; i< vertices.size() ;i++)
    {
        if(vertices.at(i).name == destination)
        {
            y = i;
        }
        
    }
    
    
    for(int i = 0; i<vertices.size() ;i++ ) //all vertices in the graph
    {
        vertices.at(i).visited = false;
        vertices.at(i).previous = NULL;
        vertices.at(i).distance = INT_MAX; //maximum integer value in C++
    }
    
    vertices.at(x).visited = true; //visited the origin
    vertices.at(x).distance = 0; //distance to the start is 0
    
    vector <vertex> solved;
    solved.push_back(vertices.at(x));

    while(vertices.at(y).visited == false) //we haven't reached our destination
    {
        int minDistance = INT_MAX;  //initialize distance
        for(int i = 0; i< solved.size() ;i++)  
        {
            for(int v = 0; v<vertices.at(i).adj.size() ; v++ )   //each vertex adjacent to u
            {
                if(vertices.at(i).adj.at(v).v->visited == false)
                {
                    vertices.at(i).adj.at(v).v->visited = true;
                    int distance; 
                    distance = (vertices.at(i).distance) + (vertices.at(i).adj.at(v).weight);
                    if(distance < minDistance)
                    {
                        minDistance = distance;
                    }
                }
            }
        }
        update solved, adding minimum vertex
        update previous, previous[min_vertex.ID] = u.ID 
    }   
}
