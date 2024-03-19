struct Element {
  Element* previous{};
  Element* next{};
  void insert_after(Element* new_element) {
    new_element->next = next;
    next = new_element;
  }
  void insert_before(Element* new_element) {
    new_element->next = this;
    if(previous) {
      previous->next = new_element;
    } else {
      previous = new_element;
    }
  }
  char prefix[2];
  short operating_number;
};

int main() {
  return 0;
}
