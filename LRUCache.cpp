class LRUCache{
	int capacity_;
	list<int> keyList_;
	unordered_map<int,pair<int,list<int>::iterator>> hashMap_;
	void insert(int key,int value){//尾插
		keyList_.push_back(key);
		hashMap_[key]=make_pair(value, --keyList_.end());
	}
public:
	LRUCache(int capacity){
		capacity_=capacity;
	}

	int get(int key){
		auto it=hashMap_.find(key);
		if(it!=hashMap_.end()){
			keyList_.erase(it->second.second);//删除原位置
			keyList_.push_back(key);//移到尾巴
			hashMap_[key].second=(--keyList_.end());//更新hashMap
			return it->second.first;
		}
		return -1;
	}

	void put(int key,int value){
		if(get(key)!=-1){//如果已经有了只更新值,并且get函数意见调整了顺序
			hashMap_[key].first=value;
			return;
		}
		if(hashMap_.size()<capacity_){
			insert(key,value);//如果容量足够，直接尾插入
		}else{
			int removeKey=keyList_.front();//容量不足，先删除首元素
			keyList_.pop_front();
			hashMap_.erase(removeKey);//hashMap同步删除
			insert(key,value);//再尾插入
		}
	}
}