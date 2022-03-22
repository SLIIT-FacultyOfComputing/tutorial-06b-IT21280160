class Box {
    private:
       int length;
       int width;
       int height;
    public:
      void setLength(int l);
      void setWidth(int w);
      void setHeight(int h);

      int getLength();
      int getWidth();
      int getHeight();

      
       // write prototypes of getters for length, width and height
 
       int calcVolume();
};
