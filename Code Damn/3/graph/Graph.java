package graph;

import java.util.*;

public class Graph {
    private class Node{
        public String value;
        public Node(){}
        public Node(String value){
            this.value = value;
        }
    }
    private Map<Node, List<Node>> adjacencyList;
    private Map<String, Node> nodes;

    public Graph(){
        this.adjacencyList = new HashMap<Node, List<Node>>();
        this.nodes = new HashMap<String, Node>();
    }

    public Node createNode(String value){
        if(this.nodes.containsKey(value)){
            System.out.println("Node already exists");
            return this.nodes.get(value);
        }


    }

    public ArrayList<Integer> bfsOfGraph(ArrayList<ArrayList<Integer>> adj) {
        ArrayList<Integer> res = new ArrayList<Integer>();
        Queue<Integer> q = new LinkedList<>();
        ArrayList<Boolean> visited = new ArrayList<>(Collections.nCopies(adj.size(), false));
        q.add(0);
        visited.set(0, true);
        while(!q.isEmpty()){
            int node = q.remove();
            ArrayList<Integer> temp = adj.get(node);
            for(int i = 0; i < temp.size(); i++){
                int ele = temp.get(i);
                if(!visited.get(ele)){
                    q.add(ele);
                    visited.set(ele, true);
                }
            }
            res.add(node);
        }
        return res;
    }
};