﻿#ifndef FUNCTION_H
#define FUNCTION_H
#include <utility>
#include "domain.h"
#include "ast.h"
#define CMD_PAIR(key,value) std::make_pair(key,std::function<variable*(std::vector<variable*>)>(value))
class function :public root {
public:
	function(const root* parent = nullptr);
	root* new_this() override;
	void run(const ast::tree&);
	root* make_copy() override;
	variable* member_access(const std::string& name);
private:
	variable* Process(const ast::tree& T);
	ast::tree Tree;
	domain dm;
};
#endif
