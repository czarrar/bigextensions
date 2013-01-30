//#include <exception>
//#include <string>
//#include <sstream>
//#include <fstream>
//#include <fcntl.h> // to remove files
//#include <unistd.h> // to truncate files
//#include <errno.h>
//#include <stdint.h>
//
//#include "bigmemory/BigMatrix.h"
//
//using namespace std;
//
//
//class LocalMirrorBigMatrix : public BigMatrix
//{
//  public:
//    LocalBigMatrix() : BigMatrix() {_shared=false;}
//    virtual ~LocalBigMatrix() {destroy();};
//    virtual bool create( const index_type numRow, const index_type numCol,
//      const int matrixType, const bool sepCols);
//
//  protected:
//    virtual bool destroy();
//};
//
//bool LocalMirrorBigMatrix::create( const index_type numRow, 
//  const index_type numCol, const int matrixType, 
//  const bool sepCols, const void* data )
//{
//  try
//  {
//    _nrow = numRow;
//    _totalRows = _nrow;
//    _ncol = numCol;
//    _totalCols = _ncol;
//    _matType = matrixType;
//    _sepCols = sepCols;
//    if (_sepCols)
//    {
//      switch(_matType)
//      {
//        case 1:
//          _pdata = CreateLocalSepMatrix<char>(_nrow, _ncol);
//          break;
//        case 2:
//          _pdata = CreateLocalSepMatrix<short>(_nrow, _ncol);
//          break;
//        case 4:
//          _pdata = CreateLocalSepMatrix<int>(_nrow, _ncol);
//          break;
//        case 8:
//          _pdata = CreateLocalSepMatrix<double>(_nrow, _ncol);
//      }
//    }
//    else
//    {
//      switch(_matType)
//      {
//        case 1:
//          _pdata = CreateLocalMatrix<char>(_nrow, _ncol);
//          break;
//        case 2:
//          _pdata = CreateLocalMatrix<short>(_nrow, _ncol);
//          break;
//        case 4:
//          _pdata = CreateLocalMatrix<int>(_nrow, _ncol);
//          break;
//        case 8:
//          _pdata = CreateLocalMatrix<double>(_nrow, _ncol);
//      }
//    }
//    if (_pdata == NULL)
//    {
//      return false;
//    }
//    return true;
//  }
//  catch(std::exception &e)
//  {
//    printf("%s\n", e.what());
//    printf("%s line %d\n", __FILE__, __LINE__);
//    return false;
//  }
//}
