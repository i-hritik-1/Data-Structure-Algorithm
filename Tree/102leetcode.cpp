// vector<vector<int>> levelOrder(Node* node)
// {
//     vector<vector<int>> ans;
//     vector<int> temp;
//     queue<Node *> q;
//     q.push(node);
//     q.push(NULL);
//     while(q.size() > 1)
//     {
//         Node *curr = q.front();
//         q.pop();
//         if(curr == NULL)
//         {
//            ans.push_back(temp); 
//            q.push(NULL);
//            temp.clear();
//            continue;
//         }
//         temp.push_back(curr->data);
//         if(curr->left !=NULL) q.push(curr->left);
//         if(curr->right != NULL) q.push(curr->right);
//     }
//     ans.push_back(temp);
    
//     return ans;
// }