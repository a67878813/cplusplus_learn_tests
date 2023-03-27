#include <vector>
#include <map>

#include <iostream>

struct GNode{
    using _TCache = std::map<const GNode*, GNode* >;// map< self pointer ,  copyed pointer>

    GNode* clone( _TCache&& cache = {}) const { // temperary rvalue,  // flat  cache
        if(auto iter = cache.find(this);
        iter != cache.end()){return iter->second;}
    auto node = new GNode (* this);//cloned target
    cache. emplace( this, node);
    for( auto child : children_) {
        node->children_. emplace_back(
            child->clone(static_cast<_TCache&&>(cache)));
        }    
    
    return node;
    
    }
    std::vector<GNode*> children_;


    
};