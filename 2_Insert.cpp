#include<iostream> // នាំចូលបណ្ណាល័យiostream សម្រាប់ប្រើប្រាស់ input និង output
using namespace std;

int main(){ // គ្រោងមុខងារចម្បង (main function) ដែលជាចំណុចចាប់ផ្តើមកម្មវិធី

    int arr[] = {1,2,3,4,5}; // កំណត់អារេ (array) arr ដែលមានទិន្នន័យ 5 មានដូចជា ៖ 1, 2, 3, 4, 5
    
    // លុបឡើងជម្រុញធាតុទាំងអស់ក្នុងអារេពីទីតាំង i = 5 ដល់ i > 2 ដោយលោតមកក្រោយ១ (shift elements one position up)
    for(int i=5; i>2; i--){
        arr[i] = arr[i-1]; // ផ្លាស់ប្តូរតម្លៃ arr[i] ដោយ arr[i-1] (ជម្រុញតម្លៃនៃ arr[i-1] ទៅទីតាំងបន្ទាប់)
    }
    
    arr[2] = 44; // បង្កើតតម្លៃថ្មី 44 ទៅក្នុង arr[2]
    
    // របៀប For-loop ដើម្បីបង្ហាញតម្លៃនៃម្នាក់មួយក្នុងអារេ arr ដែលបានកែប្រែ
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" "; // បង្ហាញតម្លៃនៃ arr[i] នៅលើក្របខ័ណ្ឌ console ដោយបំបែកពីគ្នា ១ ចន្លោះ
    }

    return 0; // ទ្រង់ទ្រាយ 0 ជាសញ្ញាសម្រាប់បញ្ចប់កម្មវិធីដោយជោគជ័យ
}
