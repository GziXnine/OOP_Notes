#include <iostream>
#include "Animal.h"
#include "Human.h"
#include "Creature.h"
#include "Employee.h"

using namespace std;

int main()
{
  // Multilevel Inheritance -> Good
  // I Can Access Public Members.
  // لو الشخص كتب نفس الفانكشن فى كل الكلاسات وعمل ليها تاج فيرشوال ف اى فانكشن تقدر تعدل عليها وهتبقى اوفررايد طب لو هو معملش تاج فيرشوال ف هى ديفولت بتبقى فيرشوال
  // يعنى لو الاب كاتب فيرشوال ف كده الطفل بتاعه يعتبر الفانكشن بتاعه اوفررايد حتى لو مكتبهاش بتبقى ديفولت ونفس الفانكشن دى بتبقى فيرشوال لو حد تانى ورثها منه يعنى بتبقى فيرشوال بنسباله
  // In CPP Only -> And This Is Wrong.
  // كل اوفررايد بقت ديفولت غصب عنك فيرشوال فى الطفل.
  Employee *e = new Employee();
  Human *e1 = new Employee();
  Creature *e2 = new Employee();

  cout << "Multilevel Inheritance" << endl;
  e->move();
  e1->move();
  e2->move();

  Human *h = new Human();
  Creature *h1 = new Human();
  h->move();
  h1->move();

  // Multiple Inheritance -> Bad

  // Hierarchical Inheritance -> Bad

  //? هل ال override و overload نفس الحاجة ؟
  //? لا ال override هو لما يكون عندك فانكشن فى الاب وفانكشن فى الطفل بنفس الاسم ونفس البراميترز ف دى بتبقى
  // override
  // وبتبقى فيرشوال لو الاب كاتبها فيرشوال ولو الاب مكتبهالهاش تاج فيرشوال ف دى بتبقى ديفولت اوفررايد
  //? اما ال overload هو لما يكون عندك فانكشن فى نفس الكلاس بنفس الاسم بس براميترز مختلفة ف دى بتبقى overload
  // انا لما باجى اعرف حاجة بعرفها على مستوى اللوجيك مش على مستوى الكود
  // ف لما بعجى اعمل فانكشن اوفرلود ف دى اصلا فانكشن بتعمل ايه؟ هى فى الاصل نفس الاسم اختلاف البراميتار ليست,
  // بس لو جينا نشوف هنلاقيها نفس الوظيفة.
  // Override -> Same Name, Same Parameters, Different Implementation
  // Overload -> Same Name, Different Parameters, Same Implementation
  // Override -> تخطى.
  return 0;
}