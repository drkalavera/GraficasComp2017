#pragma once
#include <string> 

/*********************************************************
Materia: Gr�ficas Computacionales
Fecha: 15 de Agosto del 2017
Autor: A01374526 Jos� Karlo Hurtado Corona
*********************************************************/

class InputFile
{
public:
	bool Read(const std::string& filename);
	const std::string GetContents() const;
private:
	std::string _contents;
};